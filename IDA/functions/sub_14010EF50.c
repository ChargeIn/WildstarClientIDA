//----- (000000014010EF50) ----------------------------------------------------
void __fastcall sub_14010EF50(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	_QWORD** v3; // rax
	_QWORD* v6; // rbx
	__int64 v8; // rdi
	__int64 v9; // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rdi

	v3 = *(_QWORD***)(a1 + 1224);
	v6 = *v3;
	if (*v3 != v3)
	{
		do
		{
			v8 = v6[2];
			if (a2 > *(_QWORD*)v8 || a3 < *(_QWORD*)(v8 + 8))
			{
				v6 = (_QWORD*)*v6;
			}
			else
			{
				v9 = *(_QWORD*)(v8 + 32);
				*(_QWORD*)(v8 + 16) = off_140B56A08;
				if (v9)
					sub_1400579E0(v9, a2, *(_DWORD*)(v8 + 24));
				sub_14018B900(v8, 0);
				v10 = (_QWORD*)v6[1];
				v11 = (_QWORD*)*v6;
				*v10 = *v6;
				v11[1] = v10;
				sub_14018B900((__int64)v6, 0);
				v6 = v11;
			}
		} while (v6 != *(_QWORD**)(a1 + 1224));
	}
}
// 14010EFA6: variable 'a2' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

