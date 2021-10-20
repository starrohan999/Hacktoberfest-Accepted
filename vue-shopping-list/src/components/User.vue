<template>
  <div class='user'>
    <img :src="user.avatar" alt="">
    <div> {{user.first_name}} </div>
    <div v-if='surname'> {{user.last_name}} </div>
  </div>
</template>

<script>
export default {
  props: {
    user: {
      type: Object,
      required: true,
    },
    surname: {
      type: Boolean,
    },
  },
  name: 'User',
};
</script>
<style scope>
.user {
  display: flex;
  align-content: space-between;
  align-items: center;
}
</style>
