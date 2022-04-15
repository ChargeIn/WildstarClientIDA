//----- (0000000140332920) ----------------------------------------------------
__int64 __fastcall sub_140332920(__int64 a1, __int64* a2, unsigned int a3, __int64 a4)
{
	unsigned int* v7; // rdx
	int* v8; // rdi
	int* v9; // rbx
	__int64 v10; // rax
	char* v12; // r14
	unsigned __int64 v13; // r15
	_BYTE* v14; // r14
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rcx
	int v19; // ebx
	__int64* v20; // [rsp+20h] [rbp-40h]
	__int64(__fastcall * *v21)(); // [rsp+30h] [rbp-30h] BYREF
	int* v22; // [rsp+38h] [rbp-28h]
	__int64 v23; // [rsp+40h] [rbp-20h]
	__int64 v24; // [rsp+48h] [rbp-18h]
	__int64 v25; // [rsp+50h] [rbp-10h]
	__int64 v26; // [rsp+58h] [rbp-8h]
	unsigned __int64 v27; // [rsp+80h] [rbp+20h] BYREF

	v7 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 304i64))(a1, a3);
	if (!v7)
	{
		if (qword_140C65828)
		{
			if (a3 < 3)
			{
				sub_14018EE90(&v21, (__int64)"Base Message Id #%d", a3);
			}
			else
			{
				if (a3 < dword_140C1E564)
				{
					v8 = *(int**)(qword_140C65828 + 16i64 * (a3 - 3) + 8);
					if (v8)
					{
						v9 = 0i64;
						v10 = -1i64;
						while (*((_BYTE*)v8 + ++v10) != 0)
							;
						v12 = (char*)v8 + v10;
						v13 = v10;
						if (v10 != -2)
							v9 = sub_14018B280(v10 + 1, 0);
						sub_1407DB590(v9, v8, v13);
						v14 = (char*)v9 + v12 - (char*)v8;
						if (v14)
							*v14 = 0;
						goto LABEL_16;
					}
				}
				sub_14018EE90(&v21, (__int64)"Invalid or foreign Message Id #%d", a3);
			}
		}
		else
		{
			sub_14018EE90(&v21, (__int64)"Message Id #%d", a3);
		}
		v9 = v22;
	LABEL_16:
		v27 = 0x141DEBEB8i64;
		sub_1401A2E50(0xBu, 0, &v27, v9, a3);
		if (v9)
			sub_14018B900((__int64)v9, 0);
		return 11i64;
	}
	v16 = *a2;
	v27 = 0i64;
	if (v16)
	{
		v17 = *(_QWORD*)(v16 + 32);
		v18 = v16 + 16;
		v20 = 0i64;
		*(_QWORD*)(v18 + 32) = v17;
		v22 = (int*)v18;
	}
	else
	{
		v22 = 0i64;
		v20 = a2;
	}
	v23 = 0i64;
	v24 = 0i64;
	v25 = 0i64;
	v26 = 0i64;
	v21 = off_140B64640;
	v19 = sub_1403355E0(&v21, v7, a4, &v27, v20);
	v21 = off_140B64640;
	if (v25)
		sub_14018B900(v25, 0);
	if (v19 == 1)
		return 9i64;
	else
		return v19 != 0 ? 0xC : 0;
}
// 140B64640: using guessed type __int64 (__fastcall *off_140B64640[6])();
// 140C1E564: using guessed type int dword_140C1E564;
// 140C65828: using guessed type __int64 qword_140C65828;

