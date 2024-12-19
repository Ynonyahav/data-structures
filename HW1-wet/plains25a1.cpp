// You can edit anything you want in this file.
// However you need to implement all public Plains function, as provided below as a template

#include "plains25a1.h"

/*
    Notations for the sake of complexity:
    Let 𝑛 denote the number of horses in the system.
    Let 𝑚 denote the number of herds that are not empty in the system.
    Let 𝑚∅ denote the number of empty herds in the system.
*/

/**
 *  @brief - Initializes an empty data structure. Initially, there are no herds or horses in the system.
 *  @param : None
 *  @return value: None
 *  @time_complexity: O(1) in the worst case.
*/
Plains::Plains()
{
    
}
/**
 *  @brief - The operation frees the structure (all memory allocated must be freed).
 *  @param - None
 *  @return - None
 *  @time_complexity: -𝑂(𝑛+𝑚+𝑚∅) in the worst case.
*/
Plains::~Plains()
{
    
}
/**
 * @brief - The operation adds a herd of horses to the data structure.
 * @param - herdId The herd ID to be added.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if herdId <=0 .
 *              FAILURE if a herd with the herdId ID already exists.
 *              SUCCESS in case of success.
 * @time_complexity: 𝑂(log𝑚+log𝑚∅) in the worst case.               
 */
StatusType Plains::add_herd(int herdId)
{
    return StatusType::FAILURE;
}
/**
 * @brief - The herd with the ID herdId is no longer in use, so it should be removed from the system.
 *          If there are horses in the herd, it cannot be deleted and remains in the system.
 * @param - herdId The herd ID to be removed.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if herdId <=0 .
 *              FAILURE if a herd with the herdId ID does not exist.
 *              SUCCESS in case of success.
 * @time_complexity: 𝑂(log𝑚∅) in the worst case.               
 */
StatusType Plains::remove_herd(int herdId)
{
    return StatusType::FAILURE;
}
/**
 * @brief - A horse with a unique identifier horseId is added to the system,
 *           it has no herd or leader as a starting point, and its speed is speed.
 * @param - horseId The horse ID to be added.
 * @param - speed The speed of the horse to be added.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if horseId <=0 or speed <=0.
 *              FAILURE if a horse with the horseId ID already exists in the system.
 *              SUCCESS in case of success.
 * @time_complexity: 𝑂(log𝑛) in the worst case.               
 */
StatusType Plains::add_horse(int horseId, int speed)
{
    return StatusType::FAILURE;
}
/**
 * @brief - The horse with the ID ℎ𝑜𝑟𝑠𝑒𝐼𝑑 joins the herd with the ID ℎ𝑒𝑟𝑑𝐼𝑑, if it was not previously in any herd. 
 *          When it was added to the herd, no other horse was following it and it was not following any horse.
 * @param - horseId The horse ID to be added to the herd.
 * @param - herdId The herd ID to which the horse will be added.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if horseId <=0 or herdId <=0.
 *              FAILURE if a horse with the horseId ID does not exist in the system or a herd with the herdId ID does not exist.
 *              SUCCESS in case of success.
 * @time_complexity: 𝑂(log𝑛+log𝑚+log𝑚∅) in the worst case.               
 */
StatusType Plains::join_herd(int horseId, int herdId)
{
    return StatusType::FAILURE;
}
/**
 * @brief - The horse with the ID ℎ𝑜𝑟𝑠𝑒𝐼𝑑 starts following the horse with the ID ℎ𝑜𝑟𝑠𝑒𝑇𝑜𝐹𝑜𝑙𝑙𝑜𝑤𝐼𝑑, if they are in the same herd. 
 *          If the following horse has already followed another horse, it stops following it. 
 *          If the horse being followed leaves the herd, all horses directly following it stop following it, and will not 
 *          follow it again, unless another follow action is performed that causes them to follow it again explicitly.
 * @param - horseId The horse ID that will follow another horse.
 * @param - horseToFollowId The horse ID that will be followed.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if horseId <=0 or horseToFollowId <=0 or horseId == horseToFollowId.
 *              FAILURE if a horse with the horseId ID does not exist in the system or a horse with the horseToFollowId ID does not exist 
 *                      or the two horses are not in the same herd.
 *              SUCCESS in case of success.
 * @time_complexity: 𝑂(log𝑛) in the worst case.               
 */
StatusType Plains::follow(int horseId, int horseToFollowId)
{
    return StatusType::FAILURE;
}
/** 
 * @brief - The horse with the ID ℎ𝑜𝑟𝑠𝑒𝐼𝑑 leaves its herd. 
 *          It stops following another horse if it did so until the function call, and any horse that followed it until the function call no longer follows anyone.
 * @param - horseId The horse ID that will leave the herd.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if horseId <=0.
 *              FAILURE if a horse with the horseId ID does not exist in the system or the horse is not in any herd.
 *              SUCCESS in case of success.
 * 
 */
StatusType Plains::leave_herd(int horseId)
{
    return StatusType::FAILURE;
}
/**
 * @brief - Returns the speed of the horse with the ID horseId.
 * @param - horseId The horse ID to get its speed.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if horseId <=0.
 *              FAILURE if a horse with the horseId ID does not exist in the system.
 *              SUCCESS in case of success.
 * @time_complexity: 𝑂(log𝑛) in the worst cas   e.
 */
output_t<int> Plains::get_speed(int horseId)
{
    return 0;
}
/**
 * @brief - Checks whether there is a chain of horses such that the horse with the ID ℎ𝑜𝑟𝑠𝑒𝐼𝑑 (indirectly) follows the horse with the ID    
 * 𝑜𝑡ℎ𝑒𝑟𝐻𝑜𝑟𝑠𝑒𝐼𝑑.
 * Formally if there are horses:
 * horse[1][, horse[2][, ..., horse[k]
 * such that horse[1] with the ID ℎ𝑜𝑟𝑠𝑒𝐼𝑑
 * horse[k] with the ID 𝑜𝑡ℎ𝑒𝑟𝐻𝑜𝑟𝑠𝑒𝐼𝑑
 * and for all 2≤𝑖 ≤𝑘:
 * horse[i-1] follows horse[i]
 * @param - The first horse in the chain ID
 * @param - The ID of the leading horse in the chain
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if horseId <=0 or otherHorseId <=0 or horseId == otherHorseId.
 *              FAILURE If there is no horse with the horseId identifier or there is no horse with the otherHorseId identifier.
 *              SUCCESS in case of success, In this case, the output is true if there is a chain of horses 
 *                      such that the horse with the ID horseId (indirectly) follows the horse with the ID otherHorseId, and false otherwise.
 * @time_complexity: 𝑂(log𝑛+𝑛_herdId ) in the worst case, where 𝑛_herdId is the number of horses in the herd of the horse with the identifier horseId .
 */
output_t<bool> Plains::leads(int horseId, int otherHorseId)
{
    return false;
}
/**
 * @brief - A herd is said to be able to run together if there is a single horse in the herd that leads (as in the leads function, as opposed to "following") all the other horses and no horse is leading it.
 *  The operation returns a status and also the answer to the question of whether the herd with the identifier ℎ𝑒𝑟𝑑𝐼𝑑 can run together.
 *  Formally, if we mark the horses in the herd with the identifier ℎ𝑒𝑟𝑑𝐼𝑑 as: horse]1[, horse]2[, ..., horse[k]
 *  The herd can run together if there is a 𝑗 such that for all 1≤𝑖 ≤𝑘 for 𝑖 ≠𝑗 the following holds:
 *  horse[j] leads (leads) horse[i].
 *  horse[i] does not lead (leads) horse[j]. 
 * @note - A herd with only one horse can always run together.
 * @param - ℎ𝑒𝑟𝑑𝐼𝑑 identifies the herd that needs to be tested for its ability to run together.
 * @return -    ALLOCATION_ERROR in case of a problem allocating/freeing memory.
 *              INVALID_INPUT if herdId <=0 .
 *              FAILURE if there is no herd with the ID herdId or this herd exists but is empty .
 *              SUCCESS in case of success, in this case the answer is true if the herd can run together, and false otherwise.
 * @time_complexity: 𝑂(log𝑚+𝑛_herdId ) in the worst case, where 𝑛_herdId is the number of horses in the herd with the identifier herdId.
 */
output_t<bool> Plains::can_run_together(int herdId)
{
    return false;
}
