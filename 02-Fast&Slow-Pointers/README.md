# Pattern: Fast & Slow Pointers

## Logic

The Fast & Slow Pointers pattern uses two pointers moving through a data structure at different speeds. Typically, the slow pointer moves one step at a time while the fast pointer moves two steps. The relationship between their movement helps detect cycles, find middle points, or identify repeated traversal patterns efficiently.

The movement generally follows these strategies:

* **Cycle Detection:** Fast pointer eventually catches the slow pointer if a cycle exists (e.g., Linked List Cycle).
* **Middle Finding:** When the fast pointer reaches the end, the slow pointer points to the middle (e.g., Middle of Linked List).
* **Cycle Entry Detection:** After detecting a cycle, resetting one pointer helps locate the starting point of the cycle.
* **Repeated Traversal Mapping:** Used in array-based problems where values behave like next pointers (e.g., Find Duplicate Number).

---

## Identification

This pattern is most effective when the problem involves:

* **Cycles/Loops:** Detecting whether a structure loops back to a previously visited node or index.
* **Linked Lists:** Finding cycles, middle nodes, or intersections efficiently.
* **Repeated Elements:** Problems where array values can be interpreted as pointers to indices.
* **Traversal Speed Comparison:** Situations where moving pointers at different rates reveals hidden structure behavior.
* **Memory Optimization:** Avoiding extra space such as hash sets for visited tracking.
* **Optimization:** Reducing extra-space approaches from
  `O(N)` space to `O(1)` space.

---

## Complexity Analysis

* **Time Complexity:** Usually `O(N)`, since pointers traverse the structure at most a few times.
* **Space Complexity:** `O(1)`, as only pointer variables are used.

---

## Status

**In Progress**
