//----- (00000001405F4420) ----------------------------------------------------
__int64* __fastcall sub_1405F4420(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	float v4; // xmm7_4
	__int64* v5; // r12
	__int64* v6; // rdi
	__int64 v7; // rax
	float v8; // xmm6_4
	__int64 v9; // r14
	__int64 v10; // rbp
	int* v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rax
	_QWORD* i; // rax
	__int64 j; // rcx
	unsigned int* v17; // [rsp+40h] [rbp-78h] BYREF
	unsigned int v18; // [rsp+48h] [rbp-70h]
	float v19; // [rsp+C0h] [rbp+8h] BYREF
	unsigned int v20; // [rsp+C8h] [rbp+10h] BYREF
	unsigned int v21; // [rsp+D0h] [rbp+18h] BYREF

	v1 = *(_QWORD**)(a1 + 96);
	v2 = (_QWORD*)v1[2];
	v4 = 3.4028235e38;
	v5 = 0i64;
	if (v2 != v1)
	{
		do
		{
			v6 = (__int64*)v2[5];
			if ((*(unsigned int(__fastcall**)(__int64*))(*v6 + 56))(v6) == 1)
			{
				v7 = *v6;
				v8 = 3.4028235e38;
				v19 = 3.4028235e38;
				v20 = 0;
				v21 = 0;
				(*(void(__fastcall**)(__int64*, unsigned int**, __int64))(v7 + 464))(v6, &v17, 1i64);
				if (*(_QWORD*)(qword_140C65898 + 120))
				{
					sub_1403F7E50(qword_140C65898, v17, v18, &v20, &v19, *(_DWORD*)(a1 + 496), &v21);
					v8 = v19;
				}
				v9 = (*(__int64(__fastcall**)(__int64*))(*v6 + 312))(v6);
				v10 = *(_QWORD*)(v9 + 8);
				if (v10)
				{
					v11 = sub_14018B280(8 * v10 + 16, 0);
					if (v11)
					{
						*(_QWORD*)v11 = off_140B55060;
						*((_QWORD*)v11 + 1) = v10;
						v12 = (__int64)(v11 + 4);
					}
					else
					{
						v12 = 16i64;
					}
				}
				else
				{
					v12 = 0i64;
				}
				sub_1407DB590((int*)v12, *(int**)v9, 8 * v10);
				if (*(_QWORD*)(qword_140C65898 + 120))
				{
					sub_1403F8070(qword_140C65898, v12, v10, &v20, &v19, &v21);
					v8 = v19;
				}
				if (v20 && v8 < v4)
				{
					v4 = v8;
					v5 = v6;
				}
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
				if (v17)
					(*(void(__fastcall**)(unsigned int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
			}
			v13 = v2[3];
			if (v13)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v13 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != *(_QWORD**)(a1 + 96));
	}
	return v5;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

