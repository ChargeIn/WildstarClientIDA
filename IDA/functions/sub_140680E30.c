//----- (0000000140680E30) ----------------------------------------------------
__int64 __fastcall sub_140680E30(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rdi
	__int64 v4; // rax

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& !*(_DWORD*)(*v2[6] + 12i64)
		&& ((int(__fastcall*)(_QWORD**))(*v2)[26])(v2) >= 2
		&& (v4 = sub_140617410(*v3[6], *(_DWORD*)(*v3[6] + 20i64))) != 0)
	{
		sub_1404331C0(a1, *(_QWORD*)(v4 + 152));
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

