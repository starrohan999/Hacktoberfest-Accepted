<template>
  <div>
    <h1>Users</h1>
    <button @click='loadUsers'>Load Users</button>
    <ul>
      <li v-for='user in users' :key='user.id' @click='selectUser(user)'>
        <user :user='user'/>
      </li>
      <div>
      <user v-if='selected' :user='selected' :surname='true' />
      </div>
    </ul>
  </div>
</template>

<script>
import axios from 'axios';
import User from './User';

export default {
  name: 'Users',
  components: { User },
  data() {
    return {
      users: [],
    };
  },
  methods: {
    selectUser(user) {
      this.$store.dispatch('clickUser', user.id);
    },
    loadUsers() {
      axios.get('https://reqres.in/api/users')
        .then(({ data }) => {
          const users = data.data;
          this.users = users;
        });
    },
  },
  computed: {
    selected() {
      return this.$store.state.selectedUser;
    },
  },
};
</script>

<style scoped>

</style>