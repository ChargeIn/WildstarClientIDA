#include "../winhttp.h"

//----- (00000001401559E0) ----------------------------------------------------
void __fastcall sub_1401559E0(__int64 a1)
{
	HIMC Context; // rdi
	_WORD* v3; // rax

	if (*(_DWORD*)(a1 + 16))
	{
		if (!byte_140C8A148)
		{
			Context = ImmGetContext(*(HWND*)a1);
			if (Context)
			{
				v3 = *(_WORD**)(a1 + 104);
				byte_140C8A148 = 1;
				if (v3 != *(_WORD**)(a1 + 112))
				{
					*v3 = 0;
					*(_QWORD*)(a1 + 112) = *(_QWORD*)(a1 + 104);
				}
				ImmNotifyIME(Context, 0x15u, 4u, 0);
				ImmSetCompositionStringW(Context, 9u, &unk_1409DB9C4, 2u, &unk_1409DB9DC, 2u);
				ImmNotifyIME(Context, 0x11u, 0, 0);
				ImmReleaseContext(*(HWND*)a1, Context);
				*(_DWORD*)(a1 + 448) = 0;
				*(_DWORD*)(a1 + 456) = 0;
				byte_140C8A148 = 0;
			}
		}
	}
}
// 140C8A148: using guessed type char byte_140C8A148;

