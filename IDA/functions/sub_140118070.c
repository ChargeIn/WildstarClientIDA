//----- (0000000140118070) ----------------------------------------------------
bool __fastcall sub_140118070(__int64 a1)
{
	__int16* v1; // rax

	v1 = &word_140B7B704;
	if (*(_QWORD*)(a1 + 32))
		v1 = *(__int16**)(a1 + 32);
	return *v1
		&& ((*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) / 304i64 && *(float*)(a1 + 112) > 0.0
			|| (__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3);
}
// 140B7B704: using guessed type __int16 word_140B7B704;

