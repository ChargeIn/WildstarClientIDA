//----- (000000014015C4D0) ----------------------------------------------------
__int64 __fastcall sub_14015C4D0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // r9
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(a2 + 32);
	v4 = sub_140062650(a2, (unsigned __int64*)"Apollo.MenuBarWindow", 0x14ui64);
	v5 = *(_QWORD*)(a2 + 16);
	v7 = v4;
	v8 = 4;
	sub_14005E8E0(a2, v2 + 160, (int*)&v7, v5);
	*(_QWORD*)(a2 + 16) += 16i64;
	return sub_140058BF0(a2, -2);
}

