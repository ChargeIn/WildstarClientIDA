//----- (00000001407227D0) ----------------------------------------------------
__int64 __fastcall sub_1407227D0(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rbx

	v3 = sub_14018B280(48i64, 0);
	v4 = (__int64)v3;
	if (v3)
	{
		*(_QWORD*)v3 = &off_140B74520;
		*((_QWORD*)v3 + 3) = 0i64;
		*((_QWORD*)v3 + 4) = 0i64;
		*((_QWORD*)v3 + 5) = 0i64;
		*((_QWORD*)v3 + 1) = a2;
	}
	else
	{
		v4 = 0i64;
	}
	sub_140484530(*(_QWORD*)(v4 + 8), *(_DWORD*)(*(_QWORD*)(v4 + 8) + 4i64), v4);
	return v4;
}
// 140B74520: using guessed type __int64 (__fastcall *off_140B74520)();

