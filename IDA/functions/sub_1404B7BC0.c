#include "../winhttp.h"

//----- (00000001404B7BC0) ----------------------------------------------------
void __fastcall sub_1404B7BC0(__int64 a1, int a2)
{
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // ecx
	int v8; // ebp
	_DWORD* v9; // rax
	_DWORD* v10; // rbx
	__int64 v11; // rcx
	int v12[164]; // [rsp+20h] [rbp-2A8h] BYREF

	v3 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	v5 = v3;
	if (v3)
	{
		v6 = *(_QWORD*)(v3 + 232);
		if (!v6 || !*(_DWORD*)(v5 + 272))
			v6 = 0i64;
		v7 = *(_DWORD*)(v6 + 184);
		if ((v7 & 0xFFFFFFFA) == 0 && v7 != 4)
		{
			v8 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 6120i64);
			v9 = (_DWORD*)sub_1405AC6C0(v5, v4, a2, v8);
			v10 = v9;
			if (v9)
			{
				if (!v9[76])
				{
					if (v9[27] == 5)
						return;
					goto LABEL_13;
				}
				if (!v9[77] || v9[87] != 5)
				{
				LABEL_13:
					sub_1407E4830(v12, 0i64, 0x288ui64);
					v12[a2 - 1] = 1;
					v11 = 26i64 * (unsigned int)(a2 - 1);
					*(_QWORD*)&v12[v11 + 10] = *((_QWORD*)v10 + 11);
					v12[v11 + 25] = 5;
					v12[v11 + 12] = 3;
					v12[v11 + 14] = v8;
					v12[v11 + 15] = a2;
					*(_QWORD*)&v12[v11 + 6] = *(_QWORD*)(v5 + 8);
					*(_QWORD*)&v12[v11 + 8] = *(_QWORD*)(v5 + 16);
					sub_1403F4900(qword_140C65898, 0x50Du, (__int64)v12);
				}
			}
		}
	}
}
// 1404B7C86: conditional instruction was optimized away because eax.4==0
// 1404B7C5F: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

