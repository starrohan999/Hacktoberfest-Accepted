<template>
  <div class="hello">
    <h1>Lista de la compra</h1>
    <add @addElement='addList' />
    <add @addElement='print' />
    <list :elements='list'></list>
    <total :total='totalList'>
      <p slot='title'> Total lista de la compra: </p>
    </total>
    <total :total='9'>
      <p slot='title'> NUMERO DE LIBROS: </p>
    </total>
    <user v-if='selectedUser' :user='selectedUser' :surname='true' />
  </div>
</template>

<script>
import List from './List';
import Total from './Total';
import Add from './Add';
import User from './User';

export default {
  name: 'HelloWorld',
  components: { List, Total, Add, User },
  data() {
    return {
      list: ['tomates', 'pepinos'],
    };
  },
  methods: {
    addList(current) {
      this.list.push(current);
    },
    print(current) {
      console.log(current);
    },
  },
  computed: {
    totalList() {
      return this.list.length;
    },
    selectedUser() {
      return this.$store.state.selectedUser;
    },
  },
};
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>

</style>
