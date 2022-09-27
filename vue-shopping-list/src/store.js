import Vue from 'vue';
import Vuex from 'vuex';
import axios from 'axios';

Vue.use(Vuex);

export const store = new Vuex.Store({ // eslint-disable-line
  state: {
    selectedUser: null,
  },
  actions: {
    clickUser(context, userId) {
      axios.get(`https://reqres.in/api/users/${userId}`)
        .then(({ data }) => {
          context.commit('loadUser', data.data);
        });
    },
  },
  mutations: {
    loadUser(state, user) {
      state.selectedUser = user;
    },
  },
});
