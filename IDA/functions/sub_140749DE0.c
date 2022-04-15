//----- (0000000140749DE0) ----------------------------------------------------
__int64 __fastcall sub_140749DE0(__int64 a1)
{
	_DWORD* v1; // r8
	bool v2; // zf

	v1 = *(_DWORD**)(a1 + 16);
	v2 = *(_DWORD*)(*(_QWORD*)qword_140C65B80 + 148i64) == 0;
	v1[2] = 1;
	*v1 = !v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

