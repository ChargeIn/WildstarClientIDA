//----- (00000001404C83E0) ----------------------------------------------------
__int64 __fastcall sub_1404C83E0(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD**)(a1 + 88);
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				if (sub_1404CA3F0(a1, *(_DWORD*)(a1 + 20), v3[5], *(_QWORD*)(v4 + 240)))
				{
					if ((*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v4 + 192i64))(v4, &v9) >= 0)
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 216i64))(v9, v4);
				}
				else
				{
					sub_1404B8280(qword_140C659F0, *(_DWORD*)(v4 + 496), 1);
				}
			}
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 88));
	}
	sub_1404B95D0(qword_140C659F0);
	return 0i64;
}
// 1404C8419: variable 'a1' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

