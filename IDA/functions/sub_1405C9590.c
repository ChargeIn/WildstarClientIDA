#include "../winhttp.h"

//----- (00000001405C9590) ----------------------------------------------------
void __fastcall sub_1405C9590(__int64 a1, int a2)
{
	int v2; // edi
	__int64 v3; // rbx
	__int64 v6; // rsi
	__int64* v7; // r14
	int* v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rax
	int v14; // ebx
	int v15; // eax
	int v16; // ebx
	__int64 v17; // rax
	__int64 v18; // rbx
	int* v19; // rax
	__int64* v20; // [rsp+20h] [rbp-28h] BYREF
	__int64 v21; // [rsp+28h] [rbp-20h]
	char v22; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 320);
	v3 = qword_140C65898;
	v6 = 0i64;
	v21 = 0i64;
	v20 = 0i64;
	sub_1405CABD0(qword_140C65898 + 160, v2, (__int64*)&v20);
	sub_1405CABD0(v3 + 184, v2, (__int64*)&v20);
	sub_1405CABD0(v3 + 280, v2, (__int64*)&v20);
	sub_1405CABD0(v3 + 304, v2, (__int64*)&v20);
	v7 = v20;
	if (!v21)
		goto LABEL_22;
	v8 = (int*)*v20;
	if (!*v20)
		goto LABEL_22;
	if (*(_QWORD*)(qword_140C65898 + 29064))
	{
		v9 = sub_14056A030(*v20);
		v10 = *(_QWORD*)(qword_140C65898 + 120);
		v11 = v9;
		if (v10)
		{
			v12 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v10 + 5632));
			if (v12 || *(_QWORD*)(qword_140C65898 + 120) != v10)
				goto LABEL_9;
			v13 = sub_14039DF50(qword_140C65898);
			if (v13)
			{
				v12 = sub_1404695E0(v13);
			LABEL_9:
				v6 = v12;
			}
		}
		if (v6)
		{
			if (v11)
			{
				v14 = **(_DWORD**)(v11 + 112);
				if (v14 == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6))
				{
					if (a2 == 1)
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 29064) + 40i64))(*(_QWORD*)(qword_140C65898 + 29064));
					}
					else if (!a2)
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 29064) + 32i64))(*(_QWORD*)(qword_140C65898 + 29064));
					}
				}
			}
		}
		goto LABEL_22;
	}
	if (!a2)
	{
		v15 = sub_1403998E0(qword_140C65898, v8 + 8, 0, 0i64);
		v16 = v15;
		if (v15 && v15 != 317)
		{
			*(_DWORD*)(a1 + 328) = 1;
			v17 = sub_14056A030((__int64)v8);
			sub_1403A12A0(qword_140C65898, v16, v17, 0);
		}
		v18 = *(_QWORD*)(qword_140C65898 + 29544);
		v19 = (int*)(*(__int64(__fastcall**)(int*, char*))(*(_QWORD*)v8 + 32i64))(v8, &v22);
		sub_140611DD0(v18, v19);
	}
LABEL_22:
	if (v7)
		(*(void(__fastcall**)(__int64*))(*(v7 - 2) + 8))(v7 - 2);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

