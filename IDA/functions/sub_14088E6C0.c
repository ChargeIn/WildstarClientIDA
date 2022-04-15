//----- (000000014088E6C0) ----------------------------------------------------
__int64 __fastcall sub_14088E6C0(_BYTE* a1, __int64 a2)
{
	struct _RTL_CRITICAL_SECTION* v4; // rax
	struct _RTL_CRITICAL_SECTION* v6; // rax
	struct _RTL_CRITICAL_SECTION* v7; // rax

	switch (*a1)
	{
	case 0xA:
		v7 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
		return sub_14088E4E0(qword_140C61B58, (__int64)a1, a2, v7);
	case 0xB:
		return sub_14088E290(qword_140C61B58, (__int64)a1, a2);
	case 0xC:
		v6 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
		return sub_14088E5D0(qword_140C61B58, (__int64)a1, a2, v6);
	case 0xD:
		v4 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
		return sub_14088E3F0(qword_140C61B58, (__int64)a1, a2, v4);
	default:
		return 3i64;
	}
}
// 140C61B58: using guessed type __int64 qword_140C61B58;

