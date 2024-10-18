function eventsConflict(event1, event2) {
    const [start1, end1] = event1;
    const [start2, end2] = event2;
    
    return start1 < end2 && start2 < end1;
}

const event1 = [1, 3]
const event2 = [4, 8]
console.log(eventsConflict(event1, event2))
