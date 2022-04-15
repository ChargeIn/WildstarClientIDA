//----- (000000014040CBA0) ----------------------------------------------------
void __fastcall sub_14040CBA0(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4)
{
	__int64 v4; // r14
	unsigned int v8; // ebx
	unsigned int v9; // r12d
	__int64 v10; // r15
	int* v11; // rdi
	__int64 i; // rcx
	int* v13; // rax
	int* v14; // r14
	__int64 v15; // r8
	__int64 v16; // rax
	int* v17; // rcx
	unsigned int v18; // edx
	bool v19; // zf
	unsigned int v21; // [rsp+38h] [rbp-280h] BYREF
	float v22; // [rsp+3Ch] [rbp-27Ch] BYREF
	char v23[8]; // [rsp+40h] [rbp-278h] BYREF
	int* v24; // [rsp+48h] [rbp-270h]
	__int64 v25; // [rsp+50h] [rbp-268h]
	char v26[16]; // [rsp+60h] [rbp-258h] BYREF
	int v27; // [rsp+70h] [rbp-248h] BYREF
	int v28[37]; // [rsp+78h] [rbp-240h] BYREF
	int v29[85]; // [rsp+10Ch] [rbp-1ACh] BYREF

	v4 = a4;
	if (*(_QWORD*)(a1 + 160) && *(_QWORD*)(a1 + 104) && *(_DWORD*)(a1 + 96))
	{
		*(_WORD*)(a2 + 308) = 0;
		v8 = 0;
		v24 = sub_14018B280(40i64, 0);
		v25 = 0i64;
		*(_BYTE*)v24 = 0;
		*((_QWORD*)v24 + 1) = 0i64;
		*((_QWORD*)v24 + 2) = v24;
		*((_QWORD*)v24 + 3) = v24;
		v9 = *(_DWORD*)(a1 + 96);
		if (*(_DWORD*)(a2 + 304) < v9)
			v9 = *(_DWORD*)(a2 + 304);
		if (v9)
		{
			v10 = 0i64;
			do
			{
				if (*(_DWORD*)(v10 + *(_QWORD*)(a1 + 104)))
				{
					sub_1400B52A0((__int64)v28);
					sub_1407E4830(&v27, 0i64, 0x1F0ui64);
					sub_1407E4830(v28, 0i64, 0x138ui64);
					sub_1407E4830(v29, 0i64, 0x90ui64);
					v11 = v29;
					for (i = 15i64; i; --i)
						*v11++ = 197;
					v13 = sub_1400B5DF0(v4, *(_DWORD*)(v10 + *(_QWORD*)(a1 + 104)), &v27);
					v14 = v13;
					if (!v13 || !(**(unsigned int(__fastcall***)(__int64, int*, __int64, _QWORD))a1)(a1, v13, a2, v8))
						goto LABEL_28;
					v15 = *(_QWORD*)(a1 + 104);
					v16 = *((_QWORD*)v24 + 1);
					v17 = v24;
					if (!v16)
						goto LABEL_33;
					v18 = *(_DWORD*)(v10 + v15);
					do
					{
						if (*(_DWORD*)(v16 + 32) < v18)
						{
							v16 = *(_QWORD*)(v16 + 24);
						}
						else
						{
							v17 = (int*)v16;
							v16 = *(_QWORD*)(v16 + 16);
						}
					} while (v16);
					if (v17 == v24 || v18 < v17[8])
					{
					LABEL_33:
						if (v14[73])
							sub_1400293C0((__int64)v23, (__int64)v26, (int*)(v15 + 4i64 * v8));
						if (a3)
						{
							v21 = v14[5];
							sub_14040F710(a4, &v22, &v21, v21, (int*)(a1 + 24), 1);
							sub_14040C0B0(a3, (float*)v14 + 39, v22, v21);
						}
						*(_BYTE*)(a2 + 309) |= 1 << v8;
						v19 = (v14[84] & 2) == 0;
						v4 = a4;
						if (!v19)
							*(_BYTE*)(a2 + 308) |= 1 << v8;
					}
					else
					{
					LABEL_28:
						v4 = a4;
					}
				}
				++v8;
				v10 += 4i64;
			} while (v8 < v9);
		}
		sub_140008410((__int64)v23);
		sub_14018B900((__int64)v24, 0);
	}
}
// 14040CBA0: using guessed type int var_240[37];
// 14040CBA0: using guessed type int var_1AC[85];
// 14040CBA0: using guessed type char var_258[16];
// 14040CBA0: using guessed type char var_278[8];

