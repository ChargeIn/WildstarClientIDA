//----- (000000014012FDA0) ----------------------------------------------------
void __fastcall sub_14012FDA0(_QWORD* a1)
{
	__int64 v1; // rbx
	_QWORD** v3; // rbx
	_QWORD* v4; // rcx
	_QWORD* v5; // rdi
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	int i; // edi
	unsigned int v10; // edx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rdx

	v1 = a1[181];
	*a1 = off_140B57C60;
	if (v1)
	{
		a1[181] = 0i64;
		v3 = *(_QWORD***)(v1 + 8);
		v4 = *v3;
		if (*v3 != v3)
		{
			do
			{
				v5 = (_QWORD*)*v4;
				if ((_QWORD*)v4[2] == a1)
				{
					v6 = (_QWORD*)v4[1];
					*v6 = v5;
					v5[1] = v6;
					sub_14018B900((__int64)v4, 0);
				}
				v4 = v5;
			} while (v5 != v3);
		}
	}
	v7 = a1 + 195;
	v8 = a1[195];
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*v7 = 0i64;
	}
	for (i = 5; i >= 0; --i)
	{
		v10 = *((_DWORD*)v7 - 1);
		v7 = (_QWORD*)((char*)v7 - 4);
		sub_1401429A0(qword_140C63678, v10);
	}
	v11 = a1[189];
	if (v11)
		sub_14018B900(v11, 0);
	v12 = a1[184];
	if (v12)
		sub_14018B900(v12, 0);
	sub_1400C4170((__int64)(a1 + 128));
	sub_1400C6030((__int64)a1, v13);
}
// 14012FE8B: variable 'v13' is possibly undefined
// 140B57C60: using guessed type __int64 (__fastcall *off_140B57C60[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

