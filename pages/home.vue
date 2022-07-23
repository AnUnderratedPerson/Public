<script>
export default {
    data: () => {
        return {
            message: 'Hello Vue!'
        }
    },
        
    methods: {
        refreshPage: () => {
            this.$nuxt.refresh()
        }
    }
}
</script>

<template>
    <div v-if="!$nuxt.isOnline">
        <p>
            {{ message }}
        </p>
    </div>
    <div v-else>
        <p>
            You are offline.
        </p>
        <button @click="refreshPage">
            Refresh the page
        </button>
    </div>
</template>