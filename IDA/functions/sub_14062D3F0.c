#include "../winhttp.h"

//----- (000000014062D3F0) ----------------------------------------------------
void __fastcall sub_14062D3F0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // eax
	unsigned __int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned __int64 v10; // r11
	unsigned __int64 v11; // rbx
	__int64 v12; // r10
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // r8
	unsigned __int64 v15; // r9
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18[4]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v19; // [rsp+40h] [rbp-18h]
	__int64 v20; // [rsp+68h] [rbp+10h] BYREF

	if (a2 && *(_DWORD*)(a2 + 684) && !*(_DWORD*)(a2 + 592))
	{
		if (*(_DWORD*)(a2 + 304)
			|| (v4 = *(_QWORD*)(qword_140C65898 + 120)) != 0
			&& (*(_DWORD*)(a2 + 292) == *(_DWORD*)(v4 + 8)
				|| (v5 = *(_QWORD*)(a2 + 296)) != 0 && *(_QWORD*)(v4 + 6304) == v5)
			|| (v6 = *(_DWORD*)(a2 + 264), v6 == *(_DWORD*)(a1 + 44))
			|| v6 == *(_DWORD*)(a1 + 40))
		{
			v7 = 0i64;
			v19 = 0i64;
			v8 = *(_QWORD*)(a2 + 24);
			memset(v18, 0, sizeof(v18));
			if (v8)
			{
				v7 = sub_140232A00(*(_DWORD*)(v8 + 288));
				v18[0] = v7;
			}
			if (v7 || (v9 = *(_QWORD*)(a2 + 208)) != 0 && (v7 = sub_140232A00(*(_DWORD*)(v9 + 28)), (v18[0] = v7) != 0))
			{
				v10 = *(_QWORD*)(a1 + 8);
				++* (_QWORD*)(a1 + 48);
				v11 = 0i64;
				if (!v10)
					goto LABEL_27;
				v12 = *(_QWORD*)a1;
				v13 = 0i64;
				v14 = v10;
				do
				{
					v11 = v13 + ((v14 - v13) >> 1);
					v15 = *(_QWORD*)(v12 + 40 * v11);
					if (v7 < v15)
					{
						v14 = v13 + ((v14 - v13) >> 1);
					}
					else
					{
						if (v7 <= v15)
							goto LABEL_24;
						v13 = v11 + 1;
					}
				} while (v13 < v14);
				v11 = v13;
			LABEL_24:
				if (v11 < v10 && v7 == *(_QWORD*)(v12 + 40 * v11))
				{
					++* (_DWORD*)(v12 + 40 * v11 + 12);
				}
				else
				{
				LABEL_27:
					v16 = sub_1402347C0(*(_DWORD*)(v7 + 12));
					if (v16)
						LODWORD(v18[1]) = *(_DWORD*)(v16 + 4);
					else
						LODWORD(v18[1]) = 0;
					v17 = *(_QWORD*)(a1 + 8);
					*(_OWORD*)((char*)&v18[1] + 4) = 1ui64;
					v19 = 0i64;
					v20 = v17;
					HIDWORD(v18[3]) = 0;
					sub_140033260((__int64*)(a1 + 16), &v20);
					sub_14062DA90((__int64*)a1, v11, v18);
				}
			}
		}
	}
}
// 14062D4F1: conditional instruction was optimized away because r11.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

