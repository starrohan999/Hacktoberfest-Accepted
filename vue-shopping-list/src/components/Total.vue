<template >
 <div class='total'>
  <slot name='title'>
    <p> Total compra: <p/>
  </slot>
  <p>{{total}}</p>
 </div>
</template>

<script>
export default {
  props: {
    total: {
      type: Number,
      default: 0,
    },
  },
  name: 'Total',
};
</script>

<style scoped>
.total {
  display: flex;
  justify-content: center;
  color: red;
}
</style>
