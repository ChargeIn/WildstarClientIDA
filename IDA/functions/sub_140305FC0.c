//----- (0000000140305FC0) ----------------------------------------------------
__int64 __fastcall sub_140305FC0(__int64 a1)
{
	int v1; // r13d
	int v3; // esi
	unsigned __int64 i; // r12
	int* v5; // r15
	_DWORD* v6; // rdi
	int v7; // edx
	int* v8; // rax
	__int64 v9; // r14
	int v10; // ebx
	_QWORD* j; // rbx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	_DWORD* v14; // rdi
	int v15; // edx
	int* v16; // rax
	__int64 v17; // r14
	int v18; // ebx
	int v19; // edx
	int* v20; // rax
	int* v21; // rbx
	__int64* v22; // rdx
	__int64 v23; // rcx

	v1 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) + 0x7FFFFFFF;
	v3 = v1;
	for (i = 0i64; i < *(_QWORD*)(a1 + 880); ++i)
	{
		v5 = *(int**)(*(_QWORD*)(a1 + 872) + 8 * i);
		v6 = (_DWORD*)*((_QWORD*)v5 + 1);
		if (v6 && !v6[11] && (v6[5] & 0x10) == 0)
		{
			v7 = v6[13];
			if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v7 < 0)
			{
				if (v3 - v7 > 0)
					v3 = v6[13];
			}
			else
			{
				v8 = sub_14018B280(104i64, 0);
				v9 = (__int64)v8;
				if (v8)
				{
					v10 = *v5;
					sub_1403272B0((__int64)v8, v6[13], (void(__fastcall***)(_QWORD))a1, 0);
					*(_QWORD*)v9 = off_140B644C8;
					*(_DWORD*)(v9 + 96) = 0;
					*(_DWORD*)(v9 + 64) = v10;
					*(_DWORD*)(v9 + 68) = *v6;
					*(_DWORD*)(v9 + 72) = v6[1];
					*(_DWORD*)(v9 + 76) = v6[2];
					*(_DWORD*)(v9 + 80) = v6[3];
					*(_DWORD*)(v9 + 84) = v6[4];
					*(_DWORD*)(v9 + 88) = v6[5];
					*(_DWORD*)(v9 + 92) = v6[6];
					*(_QWORD*)(v9 + 96) = (unsigned int)v6[7];
				}
				else
				{
					v9 = 0i64;
				}
				sub_1403129A0(*(_QWORD*)(a1 + 16), v9);
				v6[11] = 1;
				for (j = (_QWORD*)*((_QWORD*)v5 + 3); j; j = (_QWORD*)*((_QWORD*)v5 + 3))
				{
					v12 = (_QWORD*)j[1];
					if (v12)
						*v12 = j[2];
					v13 = j[2];
					if (v13)
						*(_QWORD*)(v13 + 8) = j[1];
					j[1] = 0i64;
					j[2] = 0i64;
					if (*j)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*j + 8i64))(*j);
					sub_14018B900((__int64)j, 0);
				}
			}
		}
		v14 = (_DWORD*)*((_QWORD*)v5 + 2);
		if (v14 && !v14[12] && (v14[5] & 0x10) == 0)
		{
			v15 = v14[14];
			if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v15 < 0)
			{
				if (v3 - v15 > 0)
					v3 = v14[14];
			}
			else
			{
				v16 = sub_14018B280(104i64, 0);
				v17 = (__int64)v16;
				if (v16)
				{
					v18 = *v5;
					sub_1403272B0((__int64)v16, v14[14], (void(__fastcall***)(_QWORD))a1, 0);
					*(_QWORD*)v17 = off_140B644B8;
					*(_DWORD*)(v17 + 64) = v18;
					*(_DWORD*)(v17 + 68) = *v14;
					*(_DWORD*)(v17 + 72) = v14[1];
					*(_DWORD*)(v17 + 76) = v14[2];
					*(_DWORD*)(v17 + 80) = v14[3];
					*(_DWORD*)(v17 + 84) = v14[4];
					*(_DWORD*)(v17 + 88) = v14[5];
					*(_QWORD*)(v17 + 92) = (unsigned int)v14[6];
				}
				else
				{
					v17 = 0i64;
				}
				sub_1403129A0(*(_QWORD*)(a1 + 16), v17);
				v14[12] = 1;
			}
		}
	}
	if (!*(_DWORD*)(a1 + 1440) && !*(_DWORD*)(a1 + 1008))
	{
		v19 = *(_DWORD*)(a1 + 1012);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v19 < 0)
		{
			if (v3 - v19 > 0)
				v3 = *(_DWORD*)(a1 + 1012);
		}
		else
		{
			v20 = sub_14018B280(64i64, 0);
			v21 = v20;
			if (v20)
			{
				sub_1403272B0((__int64)v20, *(_DWORD*)(a1 + 1012), (void(__fastcall***)(_QWORD))a1, 1);
				*(_QWORD*)v21 = off_140B644D8;
			}
			else
			{
				v21 = 0i64;
			}
			sub_1403129A0(*(_QWORD*)(a1 + 16), (__int64)v21);
			*(_DWORD*)(a1 + 1008) = 1;
		}
	}
	v22 = (__int64*)(a1 + 384);
	if (v3 - v1 >= 0)
	{
		if (*v22)
			sub_1403088B0(*v22, v22);
		return 0i64;
	}
	else
	{
		v23 = *(_QWORD*)(a1 + 16) + 520i64;
		*(_DWORD*)(a1 + 376) = v3;
		sub_140308800(v23, v22, (int*)(a1 + 376));
		return 0i64;
	}
}
// 140B644B8: using guessed type __int64 (__fastcall *off_140B644B8[9])();
// 140B644C8: using guessed type __int64 (__fastcall *off_140B644C8[7])();
// 140B644D8: using guessed type __int64 (__fastcall *off_140B644D8[5])();

