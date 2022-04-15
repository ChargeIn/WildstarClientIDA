//----- (0000000140899DB0) ----------------------------------------------------
void __fastcall sub_140899DB0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	unsigned __int64 v5; // rdi
	__int64 v6; // [rsp+38h] [rbp+10h] BYREF

	++* (_DWORD*)(a2 + 280);
	sub_140890680(a2, &v6);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v6 + 8) + 104i64))(*(_QWORD*)(v6 + 8), a2);
	v3 = *(_QWORD*)v6;
	v6 = v3;
	if (v3)
	{
		v4 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 112i64);
		v5 = v4 - sub_140890970(a2);
		if (*(_BYTE*)(a2 + 296) || *(_QWORD*)(a2 + 288) > v5)
			sub_1408908C0(a2, v5, 0);
		--* (_DWORD*)(a2 + 280);
	}
	else
	{
		--* (_DWORD*)(a2 + 280);
	}
}

