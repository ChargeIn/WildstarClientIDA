//----- (00000001403B8540) ----------------------------------------------------
__int64 __fastcall sub_1403B8540(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi

	v3 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a2);
	v4 = v3;
	if (v3)
	{
		sub_14056AA20(v3, *(_DWORD*)(a2 + 24), *(unsigned __int8*)(a2 + 28), *(_QWORD*)(a2 + 32), *(_QWORD*)(a2 + 16));
		*(_QWORD*)(v4 + 112) = *(_QWORD*)(a2 + 8);
	}
	return 0i64;
}

