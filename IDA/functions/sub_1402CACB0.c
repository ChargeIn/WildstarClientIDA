#include "../winhttp.h"

//----- (00000001402CACB0) ----------------------------------------------------
__int64 __fastcall sub_1402CACB0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rbx
	void(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rcx
	__int64 result; // rax

	if (a1 != a2)
	{
		v5 = a1 + 64;
		do
		{
			*(_QWORD*)(v5 - 64) = *(_QWORD*)a3;
			*(_QWORD*)(v5 - 56) = *(_QWORD*)(a3 + 8);
			*(_QWORD*)(v5 - 48) = *(_QWORD*)(a3 + 16);
			*(_DWORD*)(v5 - 40) = *(_DWORD*)(a3 + 24);
			*(_QWORD*)(v5 - 32) = *(_QWORD*)(a3 + 32);
			*(_QWORD*)(v5 - 16) = *(_QWORD*)(a3 + 48);
			*(_OWORD*)v5 = *(_OWORD*)(a3 + 64);
			*(_OWORD*)(v5 + 16) = *(_OWORD*)(a3 + 80);
			v6 = *(void(__fastcall****)(_QWORD))(a3 + 96);
			if (*(void(__fastcall****)(_QWORD))(v5 + 32) != v6)
			{
				if (v6)
					(**v6)(v6);
				v7 = *(_QWORD*)(v5 + 32);
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				*(_QWORD*)(v5 + 32) = *(_QWORD*)(a3 + 96);
			}
			sub_14017B020((_QWORD*)(v5 + 40), a3 + 104);
			sub_14004EDB0((_QWORD*)(v5 + 72), a3 + 136);
			v5 += 176i64;
			*(_DWORD*)(v5 - 72) = *(_DWORD*)(a3 + 168);
			result = v5 - 64;
		} while (v5 - 64 != a2);
	}
	return result;
}

