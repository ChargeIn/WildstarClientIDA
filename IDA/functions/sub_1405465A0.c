//----- (00000001405465A0) ----------------------------------------------------
void __fastcall sub_1405465A0(int a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // [rsp+20h] [rbp-18h] BYREF
	int v4; // [rsp+28h] [rbp-10h]

	v3 = 0i64;
	v4 = 0;
	LODWORD(v3) = *(_DWORD*)(a2 + 92);
	v2 = *(_QWORD*)(a2 + 312);
	HIDWORD(v3) = a1;
	v4 = *(_DWORD*)(*(_QWORD*)(v2 + 112) + 4i64) + 1;
	sub_1403F4900(qword_140C65898, 0x805u, (__int64)&v3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

