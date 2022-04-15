//----- (00000001406DD540) ----------------------------------------------------
_BOOL8 __fastcall sub_1406DD540(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	void(__fastcall * **v4)(_QWORD); // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF
	int v7; // [rsp+3Ch] [rbp+14h]

	v2 = sub_1406DDA20(a1);
	v3 = *(_DWORD*)(v2 + 1028);
	LODWORD(v2) = *(_DWORD*)(v2 + 1032);
	v6 = v3;
	v7 = v2;
	v4 = (void(__fastcall***)(_QWORD))sub_1403AC780(qword_140C65898 + 160, &v6);
	sub_140415D60(a1, v4);
	return v4 != 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

