/*
 compile: 
 g++ bhashmain.cpp -o bhashmain -I. -I./contract/evm -L. -lbitcoin_consensus -lbitcoin_util -L./crypto -lbitcoin_crypto -L/usr/lib/x86_64-linux-gnu -lboost_system -lpthread -lcrypto
*/

#include "primitives/block.h"
#include "hash_blake2.h"

void test();

int main(int argc, char *argv[])
{
    std::cout << "hi!!!" << std::endl;

    test();

    return 0;
}

uint32_t getNbits(const std::string& str);

uint256 toUint256(const std::string& str);

void test()
{
    // block 674344
	// https://bcx.info/block/00000000000003310cb642a1b2f8819673d56df0e7ab0818a5ecbb3a80f69a17
    CBlockHeader header;
    header.nVersion = 838860800;
    header.hashPrevBlock = uint256S("0000000000001934b1ba1864359d8dc51af7c67efadcd78341cb97053f6d9349");
    header.hashMerkleRoot = uint256S("1b931ec4d4ef13f2e1d31d345c5ebea67e41468662c10354fae9a4f5073972c9");
    header.nTime = 1536240953;
    header.nBits = 0x1a1cc7c6;
    header.nNonce = 13972797;

    uint256 result = header.GetHash();
    std::cout << "hash is " << result.GetHex() << std::endl;
}

uint32_t getNbits(const std::string& str)
{
    return 0;
}
