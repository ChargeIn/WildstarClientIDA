//----- (00000001401737B0) ----------------------------------------------------
float __fastcall sub_1401737B0(__int64 a1)
{
	__int64 v1; // rax
	WCHAR* v2; // rcx

	v1 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1040) + 112i64))(*(_QWORD*)(a1 + 1040));
	v2 = (WCHAR*)&unk_1409DD974;
	if (v1)
		v2 = (WCHAR*)v1;
	return *(double*)sub_1407DFD50(v2, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
}
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

