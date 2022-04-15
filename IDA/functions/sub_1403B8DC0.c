//----- (00000001403B8DC0) ----------------------------------------------------
__int64 __fastcall sub_1403B8DC0(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // r8
	int v7; // r11d
	int v8; // ecx
	signed int v9; // eax
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v12)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]
	int v14; // [rsp+58h] [rbp+10h] BYREF

	v2 = qword_140C65898;
	if (a2 == *(_DWORD*)(qword_140C65898 + 2624))
		return 1i64;
	if (a2 > 0 && (unsigned __int64)a2 >= 0xC)
		return 2i64;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4 && *(_DWORD*)(v4 + 684))
		return 3i64;
	v5 = sub_1403ABFE0(qword_140C65898 + 7160, 11, 0);
	v8 = 0x7FFFFFFF;
	if (v5 != 0x7FFFFFFF)
		v8 = v5;
	v9 = 0x80000000;
	if (v8 != 0x80000000)
		v9 = v8;
	if (v7 >= v9)
		return (unsigned int)(v6 + 4);
	if (*(_QWORD*)(v2 + 2648) != v6)
		return 5i64;
	*(_DWORD*)(v2 + 2624) = v7;
	v14 = v7;
	sub_1403F4900(v2, 0x256u, (__int64)&v14);
	v10 = 1;
	v11 = sub_14001C280(v2);
	v13 = 0i64;
	v12 = sub_1403B8EE0;
	sub_140195960(v2 + 2632, 15000, (__int64)&v10, 4);
	return 0i64;
}
// 1403B8E40: variable 'v7' is possibly undefined
// 1403B8E42: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

