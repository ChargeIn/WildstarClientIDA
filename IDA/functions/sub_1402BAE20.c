//----- (00000001402BAE20) ----------------------------------------------------
__int64 __fastcall sub_1402BAE20(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // rax

	v2 = (_QWORD*)(a2 + 112);
	*(_QWORD*)a1 = off_140B623C8;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	if (!*(_QWORD*)(a1 + 248))
	{
		*(_QWORD*)(a1 + 248) = v2;
		*(_QWORD*)(a1 + 256) = *v2;
		*v2 = a1;
		v3 = *(_QWORD*)(a1 + 256);
		if (v3)
			*(_QWORD*)(v3 + 248) = a1 + 256;
	}
	return a1;
}
// 140B623C8: using guessed type __int64 (__fastcall *off_140B623C8[2])();

