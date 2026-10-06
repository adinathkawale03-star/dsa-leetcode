int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int totalTime = 0;
    int targetTickets = tickets[k];

    for (int i = 0; i < ticketsSize; i++) {
        if (i <= k) {
            totalTime += (tickets[i] < targetTickets) ? tickets[i] : targetTickets;
        } else {
            totalTime += (tickets[i] < targetTickets - 1) ? tickets[i] : (targetTickets - 1);
        }
    }

    return totalTime;
}