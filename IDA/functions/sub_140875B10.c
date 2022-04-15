//----- (0000000140875B10) ----------------------------------------------------
_QWORD* __fastcall sub_140875B10(__int16 a1, int a2)
{
	_QWORD* result; // rax
	__int64 v5; // rbx

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 104i64);
	v5 = (__int64)result;
	if (result)
	{
		sub_14087F300(result, a1, a2);
		*(_QWORD*)v5 = off_1409A6820;
		*(_QWORD*)(v5 + 88) = 0i64;
		*(_DWORD*)(v5 + 96) = 0;
		*(_DWORD*)(v5 + 100) = 2;
		sub_140855760(v5);
		return (_QWORD*)v5;
	}
	return result;
}
// 1409A6820: using guessed type __int64 (__fastcall *off_1409A6820[6])();
// 140C10F20: using guessed type int dword_140C10F20;

