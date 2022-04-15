//----- (00000001407DFE88) ----------------------------------------------------
__int64 __fastcall sub_1407DFE88(unsigned __int8 a1, _OWORD* a2)
{
	__int64 result; // rax
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+30h] [rbp-18h]
	char v6; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v4, a2);
	result = *(_WORD*)(*(_QWORD*)(v4 + 264) + 2i64 * a1) & 0x8000;
	if (v6)
		*(_DWORD*)(v5 + 200) &= ~2u;
	return result;
}

