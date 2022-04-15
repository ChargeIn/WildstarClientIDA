//----- (00000001407716C0) ----------------------------------------------------
__int16* __fastcall sub_1407716C0(__int64 a1)
{
	__int64 v1; // rcx
	__int16* result; // rax
	__int64 v3; // rcx

	v1 = *(_QWORD*)(a1 + 384);
	if (v1)
		v1 = *(_QWORD*)(v1 + 16);
	if (!v1)
		return (__int16*)&unk_1409F98DC;
	v3 = *(_QWORD*)(v1 + 16);
	result = &word_140B7B704;
	if (v3)
		return (__int16*)v3;
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

