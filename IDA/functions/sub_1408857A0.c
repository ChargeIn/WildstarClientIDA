//----- (00000001408857A0) ----------------------------------------------------
__int64 __fastcall sub_1408857A0(__int64 a1, __int64 a2, char* a3, _QWORD* a4, int a5)
{
	__int64 v6; // rax

	*(_BYTE*)(a1 + 117) &= ~0x10u;
	*(_QWORD*)(a1 + 40) = a2;
	v6 = sub_140882830(a3, a4, a5);
	*(_QWORD*)(a1 + 32) = v6;
	return 2 - (unsigned int)(v6 != 0);
}

