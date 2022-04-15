//----- (00000001407134A0) ----------------------------------------------------
__int16* __fastcall sub_1407134A0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
		return sub_14034BDD0(a1, *(_DWORD*)(v1 + 4));
	else
		return (__int16*)&unk_1409F8BC4;
}

