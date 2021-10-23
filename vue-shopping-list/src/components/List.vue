<template >
  <ul>
    <li v-for='item in elements' :key='item'>{{item}}</li>
  </ul>
</template>

<script>
export default {
  props: ['elements'],
  name: 'List',
};
</script>

<style scoped>

</style>
