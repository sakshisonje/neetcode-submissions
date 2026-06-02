
class Solution {
    public boolean hasDuplicate(int[] nums) {
         HashMap<Integer,Integer> map = new HashMap<>();
        for (int key : nums) {
            if (map.containsKey(key)) {
                return true;
            }
            map.put(key, 1);
        }

        return false;
    }
}