<template >
   <input type="text" v-model='current' @keyup.enter='add' >
</template>

<script>
export default {
  data() {
    return {
      current: null,
    };
  },
  methods: {
    add() {
      this.$emit('addElement', this.current);
      this.current = null;
    },
  },
  name: 'add',
};
</script>

<style scoped>

</style>
