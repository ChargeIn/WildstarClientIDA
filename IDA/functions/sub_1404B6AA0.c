//----- (00000001404B6AA0) ----------------------------------------------------
void __fastcall sub_1404B6AA0(_DWORD* a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v4; // rax

	if (*a1)
	{
		v3 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v3)
		{
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 48i64))(v4, a2);
		}
	}
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

