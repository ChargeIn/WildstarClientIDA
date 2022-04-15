//----- (0000000140774670) ----------------------------------------------------
void __fastcall sub_140774670(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD** v3; // rax
	_QWORD* v4; // rbx
	int v6; // ebp
	unsigned __int64 i; // rdi
	void(__fastcall * **v9)(_QWORD, __int64); // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx

	v3 = *(_QWORD***)(a1 + 56);
	v4 = *v3;
	v6 = a2;
	if (*v3 != v3)
	{
		do
		{
			for (i = 0i64; i < v4[4]; ++i)
			{
				a2 = *(_QWORD*)(v4[3] + 8 * i);
				if (*(_DWORD*)(a2 + 12) == v6 && sub_1400F9CB0(a3, a2 + 352))
				{
					v9 = *(void(__fastcall****)(_QWORD, __int64))(v4[3] + 8 * i);
					if (v9)
						(**v9)(v9, 1i64);
					sub_140007270((__int64)(v4 + 3), i--);
				}
			}
			if (v4[4])
			{
				v4 = (_QWORD*)*v4;
			}
			else
			{
				v10 = (_QWORD*)v4[1];
				v11 = (_QWORD*)*v4;
				*v10 = *v4;
				v11[1] = v10;
				v12 = v4[3];
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
				sub_14018B900((__int64)v4, 0);
				v4 = v11;
			}
		} while (v4 != *(_QWORD**)(a1 + 56));
	}
	v13 = *(_QWORD*)(a3 + 16);
	*(_QWORD*)a3 = off_140B56A08;
	if (v13)
		sub_1400579E0(v13, a2, *(_DWORD*)(a3 + 8));
}
// 14077477A: variable 'a2' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

