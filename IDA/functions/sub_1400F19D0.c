//----- (00000001400F19D0) ----------------------------------------------------
void __fastcall sub_1400F19D0(_QWORD* a1)
{
	int v2; // esi
	__int64* v3; // rbx
	_QWORD** v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx

	*a1 = &off_140B569D8;
	v2 = 0;
	v3 = a1 + 5;
	do
	{
		sub_14018B900(*v3, 0);
		++v2;
		*v3++ = 0i64;
	} while ((unsigned __int64)v2 < 0x100);
	v4 = (_QWORD**)a1[262];
	v5 = *v4;
	if (*v4 != v4)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
		} while (v5 != (_QWORD*)a1[262]);
	}
	*(_QWORD*)a1[262] = a1[262];
	*(_QWORD*)(a1[262] + 8i64) = a1[262];
	sub_14018B900(a1[262], 0);
}
// 140B569D8: using guessed type __int64 (__fastcall *off_140B569D8)();

