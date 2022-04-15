//----- (00000001406A1270) ----------------------------------------------------
__int64 __fastcall sub_1406A1270(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	__int64 v7; // [rsp+28h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 8);
			if (!v4)
				sub_140056830(a1, (unsigned __int64*)"Error canceling: commodity order is not posted");
			v7 = 0i64;
			v6 = v4;
			LODWORD(v7) = *(_DWORD*)(v3 + 16);
			HIDWORD(v7) = *(_DWORD*)(v3 + 40);
			sub_1403F4900(qword_140C65898, 0x93u, (__int64)&v6);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

