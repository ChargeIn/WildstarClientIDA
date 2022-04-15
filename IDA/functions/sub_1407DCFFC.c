#include "../winhttp.h"

//----- (00000001407DCFFC) ----------------------------------------------------
_WORD* __fastcall sub_1407DCFFC(__int64 a1)
{
	int v2; // ebp
	_WORD* result; // rax
	void* v4; // rsi
	_WORD* v5; // r14
	wchar_t** v6; // r15
	char** v7; // r12
	int v8; // eax
	volatile signed __int32* v9; // rcx
	volatile signed __int32* v10; // rax
	volatile signed __int32* v11; // rcx
	volatile signed __int32* v12; // rcx

	v2 = 1;
	result = sub_1407E2C30(0x6A6ui64);
	v4 = result;
	if (result)
	{
		v5 = result + 2;
		result[2] = 0;
		*(_DWORD*)result = 1;
		sub_1407DCDF8(result + 2, 849i64, 3);
		v6 = &off_14095D388;
		v7 = (char**)(a1 + 56);
		do
		{
			if ((unsigned int)sub_1407E16D0(v5, 849i64, (char*)L";"))
			{
				sub_1407DC390();
				__debugbreak();
			}
			v8 = sub_1407E6BB8(*v7, v7[4]);
			v7 += 4;
			if (v8)
				v2 = 0;
			v6 += 3;
			sub_1407DCDF8(v5, 849i64, 3);
		} while ((__int64)v6 < (__int64)&off_14095D3E8);
		if (v2)
		{
			sub_1407E14C0(v4);
			v11 = *(volatile signed __int32**)(a1 + 40);
			if (v11 && _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1)
				sub_1407E14C0(*(LPVOID*)(a1 + 40));
			v12 = *(volatile signed __int32**)(a1 + 32);
			if (v12 && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1)
				sub_1407E14C0(*(LPVOID*)(a1 + 32));
			result = *(_WORD**)(a1 + 88);
			*(_QWORD*)(a1 + 32) = 0i64;
			*(_QWORD*)(a1 + 16) = 0i64;
			*(_QWORD*)(a1 + 40) = 0i64;
			*(_QWORD*)(a1 + 24) = 0i64;
		}
		else
		{
			v9 = *(volatile signed __int32**)(a1 + 40);
			if (v9 && _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1)
				sub_1407E14C0(*(LPVOID*)(a1 + 40));
			v10 = *(volatile signed __int32**)(a1 + 32);
			if (v10)
			{
				if (_InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1)
					sub_1407E14C0(*(LPVOID*)(a1 + 32));
			}
			*(_QWORD*)(a1 + 32) = 0i64;
			*(_QWORD*)(a1 + 16) = 0i64;
			*(_QWORD*)(a1 + 40) = v4;
			*(_QWORD*)(a1 + 24) = v5;
			return v5;
		}
	}
	return result;
}
// 14095D388: using guessed type wchar_t *off_14095D388;
// 14095D3E8: using guessed type wchar_t *off_14095D3E8;
// 14095D508: using guessed type wchar_t asc_14095D508[2];

