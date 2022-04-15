#include "../winhttp.h"

//----- (000000014077E580) ----------------------------------------------------
__int64 __fastcall sub_14077E580(__int64 a1, int a2)
{
	__int64 result; // rax
	_DWORD* v3; // rbx
	__int64 v4; // rdi
	int* v5; // rax
	int* v6; // rax
	int* v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // rax
	__int64 v10[24]; // [rsp+30h] [rbp-E8h] BYREF
	__int128 v11; // [rsp+F0h] [rbp-28h]
	int* v12; // [rsp+100h] [rbp-18h]
	void* retaddr; // [rsp+118h] [rbp+0h] BYREF

	result = (__int64)&retaddr;
	v3 = *(_DWORD**)(qword_140C65898 + 25744);
	if (v3)
	{
		if (v3[852])
		{
			if (v3[32] != 23 && !v3[148] && !v3[149] && !a2)
			{
				result = sub_1403D90D0(qword_140C65898, v3[66]);
				v4 = result;
				if (result)
				{
					if ((_DWORD*)result != v3)
					{
						result = *(unsigned int*)(result + 128);
						if ((_DWORD)result != 23 && !*(_DWORD*)(v4 + 592) && !*(_DWORD*)(v4 + 596))
						{
							if ((_DWORD)result != 20
								|| v3[67]
								|| (result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 72i64))(
									qword_140C65B70,
									(unsigned int)v3[2],
									*(unsigned int*)(v4 + 8)),
									(_DWORD)result))
							{
								sub_140559250(qword_140C65898 + 28848, v4);
								sub_1400B7090((__int64)v10, 328174);
								v10[0] = (__int64)off_140B69230;
								v12 = 0i64;
								v11 = 0i64;
								v5 = sub_14018B280(16i64, 0);
								*(_QWORD*)&v11 = v5;
								*((_QWORD*)&v11 + 1) = v5;
								v12 = v5 + 4;
								if (v5)
									*(_WORD*)v5 = 0;
								v6 = sub_14018B280(96i64, 0);
								if (v6)
								{
									v7 = (int*)&word_140B7B704;
									if (*(_QWORD*)(v4 + 16))
										v7 = *(int**)(v4 + 16);
									v8 = (_QWORD*)sub_1404DDB40((__int64)v6, v7);
								}
								else
								{
									v8 = 0i64;
								}
								sub_1400B7480((__int64)v10, v8);
								v9 = sub_1400B7660(v10);
								sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v9 + 8), 0, 0i64);
								if ((_QWORD)v11)
									sub_14018B900(v11, 0);
								return (__int64)sub_1400B7390(v10);
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 14077E5ED: conditional instruction was optimized away because rbx.8!=0
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

