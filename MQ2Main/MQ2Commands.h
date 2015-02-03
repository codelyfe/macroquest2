#pragma once
#if defined(ISXEQ_LEGACY) || !defined(ISXDK_VERSION)
/* COMMANDS */
LEGACY_API VOID NoModKeyCmd                         (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID CaptionColorCmd                     (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID NoParseCmd                          (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID CaptionCmd                          (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID HudCmd                              (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DropCmd                             (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID CombineCmd                          (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID ClearErrorsCmd                      (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DeleteVarCmd                        (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID NewIf                               (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID WhileCmd                            (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DoTimedCmd                          (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DoShiftCmd                          (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DoCtrlCmd                           (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DoAltCmd                            (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DoCommandCmd                        (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID SquelchCommand                      (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DumpBindsCommand                    (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID LoadCfgCommand                      (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID do_ranged                           (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID DoMappable                          (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID MQ2KeyBindCommand                   (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID MultilineCommand                    (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID PluginCommand                       (PSPAWNINFO pChar, PCHAR szLine);
LEGACY_API VOID Alert                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID Alias                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID AltAbility                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID BankList                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Breakin                             (PSPAWNINFO,PCHAR);
LEGACY_API VOID BuyItem                             (PSPAWNINFO,PCHAR);
LEGACY_API VOID Call                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID CharInfo                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Cast                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID Cleanup                             (PSPAWNINFO,PCHAR);
LEGACY_API VOID Click                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID DebugSpewFile                       (PSPAWNINFO,PCHAR);
LEGACY_API VOID DeclareVar                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID Delay                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID EQDestroyHeldItemOrMoney            (PSPAWNINFO,PCHAR);
LEGACY_API VOID DisplayLoginName                    (PSPAWNINFO,PCHAR);
LEGACY_API VOID DoAbility                           (PSPAWNINFO,PCHAR);
LEGACY_API VOID DoEvents                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID DoSocial                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Doors                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID DoorTarget                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID DumpStack                           (PSPAWNINFO,PCHAR);
LEGACY_API VOID Echo                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID EditMacro                           (PSPAWNINFO,PCHAR);
LEGACY_API VOID EndMacro                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Exec                                (PSPAWNINFO,PCHAR); 
LEGACY_API VOID Face                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID Filter                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID For                                 (PSPAWNINFO,PCHAR);
LEGACY_API VOID Goto                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID Help                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID Hotkey                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID Identify                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID IniOutput                           (PSPAWNINFO,PCHAR);
LEGACY_API VOID Items                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID ItemTarget                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID KeepKeys                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID WindowState                         (PSPAWNINFO,PCHAR);
LEGACY_API VOID ListMacros                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID LoadSpells                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID Location                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Look                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID LootAll                             (PSPAWNINFO,PCHAR);
LEGACY_API VOID Macro                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID MacroBeep                           (PSPAWNINFO,PCHAR);
LEGACY_API VOID MacroLog                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID MacroPause                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID MemSpell                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID MQMsgBox                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Next                                (PSPAWNINFO,PCHAR);
LEGACY_API VOID Return                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID SellItem                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID SetAutoRun                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID SetError                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID Skills                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID Substitute                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID SuperWho                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID SuperWhoTarget                      (PSPAWNINFO,PCHAR);
LEGACY_API VOID SWhoFilter                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID Target                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID Unload                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID UpdateItemInfo                      (PSPAWNINFO,PCHAR);
LEGACY_API VOID Where                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID ZapVars                             (PSPAWNINFO,PCHAR);
LEGACY_API VOID PopupText                           (PSPAWNINFO,PCHAR);
LEGACY_API VOID UseItemCmd                          (PSPAWNINFO,PCHAR);
LEGACY_API VOID SpellSlotInfo                       (PSPAWNINFO,PCHAR);
LEGACY_API VOID SetWinTitle							(PSPAWNINFO,PCHAR);
LEGACY_API VOID GetWinTitle							(PSPAWNINFO,PCHAR);
LEGACY_API VOID PetCmd                              (PSPAWNINFO,PCHAR);
LEGACY_API VOID MercSwitchCmd                       (PSPAWNINFO,PCHAR);
LEGACY_API VOID Break                               (PSPAWNINFO,PCHAR);
LEGACY_API VOID Continue                            (PSPAWNINFO,PCHAR);
LEGACY_API VOID PluginCmdSort                       (VOID);
#endif
