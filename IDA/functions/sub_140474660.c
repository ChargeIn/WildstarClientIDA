#include "../winhttp.h"

//----- (0000000140474660) ----------------------------------------------------
void __fastcall sub_140474660(__int64 a1, unsigned int a2)
{
	char v3; // di
	_DWORD* v4; // rax
	__int64* v5; // rbx
	int v6; // edx
	__int64 v7; // rbx
	unsigned int v8; // eax
	__int64 v9; // rax
	int v10; // ebx
	int v11; // eax
	int v12; // r14d
	int v13; // ecx
	unsigned int v14; // eax
	unsigned int v15; // edi
	__int64 v16; // r12
	__int64 v17; // r13
	unsigned int v18; // ebx
	unsigned int v19; // r15d
	unsigned int v20; // ebx
	bool v21; // cf
	__int64 v22; // rcx
	unsigned int v23; // eax
	unsigned int v24; // r15d
	__int64 v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rbx
	unsigned int v28; // edx
	unsigned int v29; // edx
	__int64 v30; // rcx
	unsigned int v31; // [rsp+20h] [rbp-20h] BYREF
	int v32; // [rsp+24h] [rbp-1Ch]
	__int64 v33; // [rsp+28h] [rbp-18h]
	__int128 v34; // [rsp+30h] [rbp-10h]

	v3 = 8;
	if (a2)
	{
		v4 = (_DWORD*)sub_1401FDBE0(a2);
		if (v4)
		{
			if (v4[14])
			{
				v5 = *(__int64**)(a1 + 5864);
				if (v5)
				{
					if (v4[15] == 7)
					{
						v6 = v4[21];
						if (v6)
						{
							v7 = *v5;
							v8 = sub_140470540((_DWORD*)a1, v6);
							v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(v7 + 424))(*(_QWORD*)(a1 + 5864), v8, 0i64);
							if (*(_DWORD*)v9 != 150 && (*(_BYTE*)(v9 + 8) & 1) == 0)
								v3 = 0;
						}
					}
				}
			}
		}
	}
	v10 = 0;
	if (*(_QWORD*)(a1 + 3264))
	{
		v11 = sub_140467ED0(a1);
		*(_DWORD*)(a1 + 5164) &= ~8u;
		*(_DWORD*)(a1 + 5164) |= v3 & 8;
		v12 = *(_DWORD*)(a1 + 5164);
		if ((v11 & 0xFFFFFFF6) == 0 && v11 != 1)
		{
			v10 = 1;
			v12 = 63;
		}
		v13 = *(_DWORD*)(a1 + 5160);
		if (v13 != v12)
		{
			if (v12 == 63)
			{
				if (v10
					|| !*(_QWORD*)(a1 + 5864)
					|| *(_DWORD*)(a1 + 440)
					|| *(_DWORD*)(a1 + 444)
					|| (v14 = sub_140470540((_DWORD*)a1, 6708), (v15 = v14) == 0)
					|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						v14))
				{
					sub_140195D70(a1 + 5168);
					sub_140195D70(a1 + 5240);
					(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
						*(_QWORD*)(a1 + 3264),
						3i64,
						3i64);
					*(_DWORD*)(a1 + 5312) = 1;
					if (*(_QWORD*)(a1 + 5864))
					{
						sub_140471EF0(a1, 1, 1);
						sub_140471EF0(a1, 1, 0);
					}
				}
				else
				{
					v16 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
					v17 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
						*(_QWORD*)(a1 + 5864),
						v15,
						v16);
					v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v15,
						(unsigned int)v16,
						57i64);
					v19 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v15,
						(unsigned int)v16,
						55i64);
					if (v18 < v19)
						v19 = v18;
					v20 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
						*(_QWORD*)(a1 + 5864),
						v15,
						(unsigned int)v16,
						56i64);
					if (v20 == -1)
						v20 = *(_DWORD*)(v17 + 20) >> 1;
					if (v19 == -1)
						v19 = v20;
					v21 = *(_DWORD*)(v17 + 20) < v19;
					v31 = 0;
					*((_QWORD*)&v34 + 1) = 0i64;
					if (v21)
						v19 = *(_DWORD*)(v17 + 20);
					v33 = a1;
					*(_QWORD*)&v34 = sub_140471DB0;
					sub_140195960(a1 + 5168, v19, (__int64)&v31, 4);
					if (*(_DWORD*)(v17 + 20) < v20)
						v20 = *(_DWORD*)(v17 + 20);
					v31 = 0;
					v33 = a1;
					*(_QWORD*)&v34 = sub_140471E00;
					*((_QWORD*)&v34 + 1) = 0i64;
					sub_140195960(a1 + 5240, v20, (__int64)&v31, 4);
					v22 = *(_QWORD*)(a1 + 5864);
					v33 = 1065353216i64;
					v31 = v15;
					v32 = v16;
					LODWORD(v34) = 33;
					*(_QWORD*)((char*)&v34 + 4) = 2i64;
					HIDWORD(v34) = 0;
					(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v22 + 584i64))(v22, 6i64, &v31);
				}
			}
			else if (v13 == 63)
			{
				if (v10
					|| !*(_QWORD*)(a1 + 5864)
					|| *(_DWORD*)(a1 + 440)
					|| *(_DWORD*)(a1 + 444)
					|| (v23 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v11, 0i64),
						(v24 = v23) == 0)
					|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
						*(_QWORD*)(a1 + 5864),
						v23))
				{
					v31 = 0;
					*(_QWORD*)&v34 = sub_140471E50;
					v33 = a1;
					*((_QWORD*)&v34 + 1) = 0i64;
					sub_140195960(a1 + 5168, 150, (__int64)&v31, 4);
					*(_QWORD*)&v34 = sub_140471EA0;
					v31 = 0;
					v33 = a1;
					*((_QWORD*)&v34 + 1) = 0i64;
					sub_140195960(a1 + 5240, 150, (__int64)&v31, 4);
				}
				else
				{
					v25 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
					v26 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
						*(_QWORD*)(a1 + 5864),
						v24,
						v25);
					v27 = v26;
					v28 = *(_DWORD*)(v26 + 24);
					v31 = 0;
					v33 = a1;
					v21 = *(_DWORD*)(v26 + 20) < v28;
					*(_QWORD*)&v34 = sub_140471E50;
					*((_QWORD*)&v34 + 1) = 0i64;
					if (v21)
						v28 = *(_DWORD*)(v26 + 20);
					sub_140195960(a1 + 5168, v28, (__int64)&v31, 4);
					v29 = *(_DWORD*)(v27 + 24);
					if (*(_DWORD*)(v27 + 20) < v29)
						v29 = *(_DWORD*)(v27 + 20);
					v31 = 0;
					v33 = a1;
					*(_QWORD*)&v34 = sub_140471EA0;
					*((_QWORD*)&v34 + 1) = 0i64;
					sub_140195960(a1 + 5240, v29, (__int64)&v31, 4);
					v30 = *(_QWORD*)(a1 + 5864);
					v31 = v24;
					v33 = 1065353216i64;
					v32 = v25;
					LODWORD(v34) = 33;
					*(_QWORD*)((char*)&v34 + 4) = 2i64;
					HIDWORD(v34) = 0;
					(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v30 + 584i64))(v30, 6i64, &v31);
				}
				*(_DWORD*)(a1 + 5312) = 1;
			}
			if ((v12 & 4) != 0)
				sub_140195D70(a1 + 5016);
			if ((v12 & 0x10) != 0)
				sub_140195D70(a1 + 5088);
			*(_DWORD*)(a1 + 5160) = v12;
		}
	}
}

