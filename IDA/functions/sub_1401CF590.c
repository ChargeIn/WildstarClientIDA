//----- (00000001401CF590) ----------------------------------------------------
__int64 __fastcall sub_1401CF590(__int64 a1)
{
	int* v2; // rax
	const char* v4; // [rsp+20h] [rbp-38h] BYREF
	int v5; // [rsp+28h] [rbp-30h]
	int v6; // [rsp+2Ch] [rbp-2Ch]
	__int64 v7; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * v8)(__int64); // [rsp+38h] [rbp-20h]
	__int64 v9; // [rsp+40h] [rbp-18h]
	int v10; // [rsp+48h] [rbp-10h]

	v2 = sub_14018B280(32i64, 0);
	if (v2)
	{
		*((_QWORD*)v2 + 1) = 0i64;
		*(_QWORD*)v2 = 0i64;
		*((_QWORD*)v2 + 3) = 0i64;
		*((_QWORD*)v2 + 2) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	*(_QWORD*)(a1 + 96) = v2;
	v4 = "FileMonitor";
	v5 = 1;
	v6 = 2;
	v7 = a1;
	v8 = sub_1401CF610;
	v9 = 0i64;
	v10 = 1;
	return sub_1401A0EB0((__int64)&v4, 0i64, (__int64*)(a1 + 88));
}

