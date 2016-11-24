//
// Created by Haoran Zhi on 16/10/21.
//

#ifndef INC_6771ASSIGN6_BUCKETSORT_H
#define INC_6771ASSIGN6_BUCKETSORT_H
#include <vector>
#include <thread>
#include <mutex>
#include<cmath>
struct BucketSort {

    void sort(unsigned int numCores);
    // The function that divide the whole vector into numCores - 1 small vectors ,then we can use
    // multithreading to sort them


    // Mergeing the SubBackets into the answer Bucket
    void SortSubBucket(std::vector<int> & );
  //  void SortSubBucket(int* );
    void DevideToSubParts(int index);


    //the maximum number of subthreads allowd
    int NumOfSubThread;

    std::vector<unsigned int> numbersToSort;







    /* This is a 3D vector, within the 3D bucket, the first depth is NumOfSubThread vectors, each of
     which has 9 sub vectors ,The overall idea is that separating the whole numbersToSort vector into
     NumOfSubThread parts, then separating each parts into 9 parts , every parts holding the number begining with
     corresponding numbers

     For example, Bucket_3D[index][id]  is holding all the numbers that appears within the indexth+1 part, and begining
     with  id+1

     To make it more clearly, Bucket_3D[2][5] is holding all the numbers within the third part, and begining with 6
     like 6, 688, 695...

     And the definition "Part" I used above is definied by the function DevideToSubParts
     */
    std::vector<std::vector<std::vector<unsigned int>>> Bucket_3D;

    //the maximum number of threads allowed


    // This vector is going to hold the final answer obtained from the SortsSubBucket
    std::vector<std::vector<unsigned int>> answer_bucked;


    std::mutex NineBuckekMutex;

};



#endif //INC_6771ASSIGN6_BUCKETSORT_H
