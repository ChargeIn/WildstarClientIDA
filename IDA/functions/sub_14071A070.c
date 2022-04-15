//----- (000000014071A070) ----------------------------------------------------
__int64 __fastcall sub_14071A070(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v7)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	if (!*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 12))
	{
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
		v5 = 0;
		v8 = 0i64;
		v3 = *(_DWORD*)(v2 + 4);
		v7 = sub_14071A0E0;
		v6 = a1;
		sub_140195960(a1 + 128, v3, (__int64)&v5, 4);
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
}

