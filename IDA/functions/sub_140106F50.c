//----- (0000000140106F50) ----------------------------------------------------
__int16* __fastcall sub_140106F50(__int64 a1)
{
	__int16* result; // rax
	__int64 v2; // rcx

	if (*(_QWORD*)(a1 + 32) == *(_QWORD*)(a1 + 40))
		return (__int16*)&unk_1409D4FA4;
	v2 = **(_QWORD**)(a1 + 32);
	result = &word_140B7B704;
	if (*(_QWORD*)(v2 + 32))
		return *(__int16**)(v2 + 32);
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

